//
//  RestResponse.h
//  photoWall
//
//  Created by tangdaniel on 12/05/2017.
//  Copyright © 2017 edu.self. All rights reserved.
//

#import <Foundation/Foundation.h>


@class RestRequest;

@interface RestResponse : NSObject

- (instancetype)initWithRequest:(RestRequest*)request rawResponse:(NSURLResponse*)response andResponseObject:(id)object;

@property (readonly) NSInteger statusCode;
@property (readonly) BOOL succeeded;
@property (readonly) id result;
@property (readonly) NSError* error;
@property (readonly) NSDictionary* headers;

@end
