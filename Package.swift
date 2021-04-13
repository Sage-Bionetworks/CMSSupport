// swift-tools-version:5.3
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "OpenSSL",
    platforms: [
        .iOS(.v9)
    ],
    products: [
        // Products define the executables and libraries a package produces, and make them visible to other packages.
        .library(
            name: "openssl",
            targets: ["openssl"]),
        .library(
            name: "CMSSupport",
            targets: ["CMSSupport"]),
    ],
    dependencies: [
        // Dependencies declare other packages that this package depends on.
        // .package(url: /* package url */, from: "1.0.0"),
    ],
    targets: [
        .binaryTarget(name: "openssl",
                      path: "openssl/build/openssl.xcframework"),
        .binaryTarget(name: "CMSSupport",
                      path: "output/CMSSupport.xcframework"),
    ]
)
