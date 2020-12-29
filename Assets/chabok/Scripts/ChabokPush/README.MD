# Release note

## v1.0  --> Developer(Hossein Shooshtari @smooke9)
--------------------------------------------------------------------------------------------
###  ANDROID   ###

** Gradle:
# how to add: [unity editor > player settings > publishing settings > build > custom gradle template]() ##
Edit added templates, add android dependencies like regular android project.

- Gradle Classes :
 - mainTemplate : App-level gradle.
    Regular android project uses 'com.android.application' plugin but Unity uses 'com.android.library' plugin inside gradle.
 - baseProjectTemplate : Project-level gradle.
 - gradleTemplate : gradle properties.
 - launcherTemplate :[!!! NOT SURE !!!] Import the Plugins that need 'com.android.application' in this gradle file.


###  IOS       ###

