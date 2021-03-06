//
//  ApperyioURLProtocol.h
//
//  Created by Sergey Seroshtan on 16.11.12.
//  Copyright Exadel Inc. 2012. All rights reserved.
//

#import <Cordova/CDVWhitelist.h>

/**
 * This protocol is used to configure accepting connections from the self-signed servers.
 */
@interface ApperyioURLProtocol : NSURLProtocol

/**
 * Register and configure URL protocol for Apperyio purposes,
 *     which allow/deny to accept connection from the servers with self-signed certificates.
 */
+ (void)registerWithWhiteList:(CDVWhitelist *)whiteList allowAllCertificates:(BOOL)allowAllCertificates;

@end
