//
//  RestClient.h
//  photoWall
//
//  Created by tangdaniel on 12/05/2017.
//  Copyright © 2017 edu.self. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "RestRequest.h"
#import "RestResponse.h"

@protocol RequestAuthenticator <NSObject>

- (void)authenticate:(RestRequest*)request;

@end

@interface RestClient : NSObject

+ (NSString*)defaultEndPoint;

- (instancetype)initWithAuthenticator:(id<RequestAuthenticator>)authenticator;

- (instancetype)initWithEndPoint:(NSString*)endPoint andAuthenticator:(id<RequestAuthenticator>)authenticator;

- (RestRequest*)path:(NSString*)path;

@end
