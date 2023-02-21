// Created 2/20/23
// swift-tools-version:5.0

import Foundation

#if canImport(CMSSupport)
import CMSSupport
#endif

public final class CMSEncryption {

    public static func cmsEncrypt(_ data: Data, identityPath: String) throws -> (data: Data, encrypted: Bool) {
        #if canImport(CMSSupport)
        (try CMSSupport.cmsEncrypt(data, identityPath: identityPath), true)
        #else
        (data, false)
        #endif
    }
}
