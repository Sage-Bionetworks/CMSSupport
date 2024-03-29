//
//  CMSSupport.h
//  CMSSupport
//
//  Created by Erin Mounts on 6/12/15.
//
//	Copyright (c) 2015-2021, Sage Bionetworks
//	All rights reserved.
//
//	Redistribution and use in source and binary forms, with or without
//	modification, are permitted provided that the following conditions are met:
//	    * Redistributions of source code must retain the above copyright
//	      notice, this list of conditions and the following disclaimer.
//	    * Redistributions in binary form must reproduce the above copyright
//	      notice, this list of conditions and the following disclaimer in the
//	      documentation and/or other materials provided with the distribution.
//	    * Neither the name of Sage Bionetworks nor the names of BridgeSDk's
//		  contributors may be used to endorse or promote products derived from
//		  this software without specific prior written permission.
//
//	THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
//	ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
//	WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
//	DISCLAIMED. IN NO EVENT SHALL <COPYRIGHT HOLDER> BE LIABLE FOR ANY
//	DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
//	(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
//	LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
//	ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
//	(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
//	SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//

@import Foundation;

//! Project version number for CMSSupport.
FOUNDATION_EXPORT double CMSSupportVersionNumber;

//! Project version string for CMSSupport.
FOUNDATION_EXPORT const unsigned char CMSSupportVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <CMSSupport/PublicHeader.h>

@interface CMSSupport : NSObject

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
