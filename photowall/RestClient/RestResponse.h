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
