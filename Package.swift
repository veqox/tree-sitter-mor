// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterMor",
    products: [
        .library(name: "TreeSitterMor", targets: ["TreeSitterMor"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterMor",
            dependencies: [],
            path: ".",
            sources: [
                "src/parser.c",
                // NOTE: if your language has an external scanner, add it here.
            ],
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterMorTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterMor",
            ],
            path: "bindings/swift/TreeSitterMorTests"
        )
    ],
    cLanguageStandard: .c11
)
