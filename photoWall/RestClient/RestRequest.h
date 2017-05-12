//
//  RestRequest.h
//  photoWall
//
//  Created by tangdaniel on 12/05/2017.
//  Copyright © 2017 edu.self. All rights reserved.
//

#import <Foundation/Foundation.h>
@class RestResponse;

typedef void(^ResponseHandler)(RestResponse*);

@interface RestRequest : NSObject

- (instancetype)initWithURL:(NSString*)url;

- (RestRequest*)query:(NSString*)key withValue:(NSString*)value;

- (RestRequest*)resolve:(NSString*)key withValue:(NSString*)value;

- (RestRequest*)setValue:(NSString*)value forHeader:(NSString*)header;

- (void)get:(ResponseHandler)handler;

- (void)delete:(ResponseHandler)handler;

- (void)put:(id)content withHandler:(ResponseHandler)handler;

- (void)post:(id)content withHandler:(ResponseHandler)handler;

- (void)upload:(NSData*)data withMethod:(NSString*)method andHandler:(ResponseHandler)handler;

@property (readonly) NSString* url;
@property (readonly) NSString* completeURL;
@property (readonly) NSDictionary* headers;
@property (readonly) NSDictionary* pathParameters;
@property (readonly) NSDictionary* queryParameters;

@end
