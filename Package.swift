// swift-tools-version:5.3
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "MRuby",
    products: [
        // Products define the executables and libraries a package produces, and make them visible to other packages.
        .library(
            name: "MRuby",
            targets: ["MRuby"]),
        .library(
            name: "CMRuby",
            targets: ["CMRuby"]),
    ],
    dependencies: [
        // Dependencies declare other packages that this package depends on.
        // .package(url: /* package url */, from: "1.0.0"),
    ],
    targets: [
        // Targets are the basic building blocks of a package. A target can define a module or a test suite.
        // Targets can depend on other targets in this package, and on products in packages this package depends on.
        .target(
            name: "MRuby",
            dependencies: ["CMRuby"]),
        
        .target(
            name: "CMRuby",
            dependencies: [],
            exclude: [
                "src/mruby_core.rake",
                "mrbgems/mruby-compiler/core/lex.def",
                "mrbgems/mruby-compiler/core/parse.y",
                "mrbgems/mruby-compiler/core/keywords",
            ]
        ),
        .testTarget(
            name: "MRubyTests",
            dependencies: ["MRuby"],
            resources: [
                .copy("Resource")
            ]
        ),
    ]
)
