# HIGH LEVEL TEST PLAN
## program test
| Test no. | choices | Input | Expected output | Actual Output | Passed Or Not |
| --- | --- | --- | --- | --- | --- |
| 1 | Check if you'r registered or not | 1 | Goto registration portal | Gone registration portal | passed |
| 2 | Enter for voating                | 2 | Goto voting portal | Goto voting portal | passed  |
| 3 | check current voting             | 3 | Show current voting stats | Shows current voting stats | passed  |
| 4 | exit                             | 4 | terminate | terminate | passed  |

----------------------------------------------------------------------------------------------------------------------------all passed
# workflow tests
| Linux Build | Build | Unity | Codiga | Codacy |codeac| Static check | Dynamic check |
| --- | --- | --- | --- | --- | --- | --- | --- |
[![Linux_BUILD_CHECK](https://github.com/Nehalkamble/M1_VotingSystem-Util/actions/workflows/Linux_BUILD_CHECK.yml/badge.svg)](https://github.com/Nehalkamble/M1_VotingSystem-Util/actions/workflows/Linux_BUILD_CHECK.yml)|[![BUILD](https://github.com/Nehalkamble/M1_VotingSystem-Util/actions/workflows/BUILD.yml/badge.svg)](https://github.com/Nehalkamble/M1_VotingSystem-Util/actions/workflows/BUILD.yml)|[![UNITY_TEST](https://github.com/Nehalkamble/M1_VotingSystem-Util/actions/workflows/UNITY_TESTt.yml/badge.svg)](https://github.com/Nehalkamble/M1_VotingSystem-Util/actions/workflows/UNITY_TESTt.yml)|![Codiga Badge](https://api.codiga.io/project/31204/score/svg) ![Codiga Badge](https://api.codiga.io/project/31204/status/svg)|[![Codeac](https://static.codeac.io/badges/2-455661300.svg "Codeac")](https://app.codeac.io/github/Nehalkamble/M1_VotingSystem-Util-)|![Codacy Badge](https://app.codacy.com/project/badge/Grade/f85d03772df547748d1569f1acacfade)|[![Cppcheck](https://github.com/Nehalkamble/M1_VotingSystem-Util/actions/workflows/STATIC_CHECK.yml/badge.svg)](https://github.com/Nehalkamble/M1_VotingSystem-Util/actions/workflows/STATIC_CHECK.yml)|[![Dynamiccheck](https://github.com/Nehalkamble/M1_VotingSystem-Util/actions/workflows/DYNAMIC_ANALYSIS.yml/badge.svg)](https://github.com/Nehalkamble/M1_VotingSystem-Util/actions/workflows/DYNAMIC_ANALYSIS.yml)|

----------------------------------------------------------------------------------------------------------------------------all passed


# LOW LEVEL TEST PLAN
###  registration portal Configuration Test

| Test no. | Description | Input | Expected output | Actual Output | passed/not |
| --- | --- | --- | --- | --- | --- |
| 01 | user input for voter id | 000 | you are already registered | you are already registered | passed |
| 02 | user input for voter id | 100 | you are not registered | you are not registered | passed |
| 03 |user input for voter id | 123 | you are not registered | you are not registered | passed |
| 04 | user input for voter id | 655 | you are not registered | you are not registered | passed |
| 05 | redirect to voting portal | yes |goto gegistration portal |gone gegistration portal | passed |
| 06 | redirect to voting portal | no |goto main page |gone main page| passed |

----------------------------------------------------------------------------------------------------------------------------all passed


### voting portal testing

| Test no. | Description | Input | Expected output | Actual Output | passed/not |
| --- | --- | --- | --- | --- | --- |
| 01 | user input for voter id | 000 | proceed to voting | proceeded to voting | passed |
| 02 | options for choice | 1 | voting completed |  voting completed | passed |
| 03 | options for choice | 3 | voting completed |  voting completed | passed |
|04| redirect top main page after the sucessfull voting| redirect|redirected|passed|

----------------------------------------------------------------------------------------------------------------------------all passed
### voting stats check

| Test no. | Description | Input | Expected output | Actual Output | passed/not |
| --- | --- | --- | --- | --- | --- |
| 01 | user input for password | 0000 | show voting stats | shows voting stats | passed |
| 02 | user input for password | 5646 | show wrong password  | shows wrong password | passed |

----------------------------------------------------------------------------------------------------------------------------all passed

# testing priview
* This project contains a basic voting system
    * In first step there are 4 options
    * ![Screenshot 2022-02-11 001026](https://user-images.githubusercontent.com/98838252/153474771-d3ce9ecb-7d52-496b-8af3-a2d85d97b67b.png)
        * CHOICE 1
        * ![Screenshot 2022-02-11 001236](https://user-images.githubusercontent.com/98838252/153475072-d1f81a62-222c-4255-b6ef-17d6766aa0de.png)
            * WHEN YOU ARE NOT REGISTERED
            * ![Screenshot 2022-02-11 001551](https://user-images.githubusercontent.com/98838252/153475719-5aa14134-6d0d-4ea7-b7ff-6b81f1ec60d1.png)
               * WHEN YOU SELECT TO PROCEED TO REGISTRATION PORTAL
               * ![Screenshot 2022-02-11 002054](https://user-images.githubusercontent.com/98838252/153476517-4dab9e88-c4d1-4368-b514-50be255f4ce8.png)
               * WHEN YOU DONT CHOSE TO GO TO REGISTRATION PORTAL - you will be redirected to main menu
               * ![Screenshot 2022-02-11 002308](https://user-images.githubusercontent.com/98838252/153476855-ea428a71-953b-4419-b483-20b20183e2c8.png)


            * WHEN YOU ARE REGISTERED
            * ![Screenshot 2022-02-11 001726](https://user-images.githubusercontent.com/98838252/153475906-c6b03b17-dd4f-4012-8df0-861b6b74cf62.png)
               * when you choose to go to voating portal
               * ![Screenshot 2022-02-11 002514](https://user-images.githubusercontent.com/98838252/153477220-62d8eda1-65fa-4a62-b9c5-f31e06256020.png)
               * when you give your vote
               * ![Screenshot 2022-02-11 002709](https://user-images.githubusercontent.com/98838252/153477431-dfcd6c7f-ff67-4bb2-a389-2a597c75fb91.png)




        * CHOICE 2
        * ![Screenshot 2022-02-11 001340](https://user-images.githubusercontent.com/98838252/153475283-85144ea9-7dea-4979-929b-90940a5c8ce3.png)
            * after entering required fills
            * ![Screenshot 2022-02-11 002854](https://user-images.githubusercontent.com/98838252/153477925-da8d5430-8481-4a71-8921-5716c9a2c45b.png)
            * after giving vote
            * ![Screenshot 2022-02-11 003012](https://user-images.githubusercontent.com/98838252/153478040-61ec1f37-66d3-420a-8fd5-ebc312739a37.png)


        * CHOICE 3
        * ![Screenshot 2022-02-11 003201](https://user-images.githubusercontent.com/98838252/153478283-c23c3b5a-58af-41a5-a120-8a2932683f59.png)
        * CHOICE 4
        * ![Screenshot 2022-02-11 003244](https://user-images.githubusercontent.com/98838252/153478425-3584986f-fbfa-4a03-bfb9-1c7b79e5bd80.png)
* END




