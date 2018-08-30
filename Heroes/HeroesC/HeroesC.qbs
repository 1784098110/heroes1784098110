import qbs

Project {
    minimumQbsVersion: "1.7.1"

    CppApplication {
        consoleApplication: true
        files: [
            "entities.cpp",
            "entities.h",
            "main.cpp",
            "types.cpp",
            "types.h",
            "weapons.cpp",
            "weapons.h",
        ]

        Group {     // Properties for the produced executable
            fileTagsFilter: "application"
            qbs.install: true
        }
    }
}
