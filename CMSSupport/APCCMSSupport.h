//
//  APCCMSSupport.h
//  CMSSupport
//
//  Created by Erin Mounts on 6/17/15.
//  Copyright (c) 2015 Erin Mounts. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface APCCMSSupport : NSObject

/*!
 *  Encrypt data using CMS. See https://en.wikipedia.org/wiki/Cryptographic_Message_Syntax and https://tools.ietf.org/html/rfc5652 for details.
 *
 *  @param data         The data to be encrypted.
 *  @param identityPath Path to the .pem (X.509) public key file to be used for encryption.
 *  @param error        Error, if any, encountered while attempting to encrypt the data.
 *
 *  @return The CMS-encrypted data.
 */
+ (NSData *)cmsEncrypt:(NSData *)data identityPath:(NSString *)identityPath error:(NSError * __autoreleasing *)error;

@end
