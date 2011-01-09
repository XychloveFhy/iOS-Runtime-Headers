/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/DAVKit.framework/DAVKit
 */

@class NSMutableData, NSArray;



@interface DAVMultiStatusBodyReader : NSObject <DAVResponseBodyReader>
{
    Class responseClass;
    NSMutableData *readData;
    NSArray *responses;
}

+ (id)multiStatusBodyReader;
+ (id)multiStatusBodyReaderWithResponseClass:(Class)arg1;
+ (id)propFindBodyReader;

- (id)initWithResponseClass:(Class)arg1;
- (id)initForPropFind;
- (id)responses;
- (id)init;
- (void)dealloc;
- (BOOL)request:(id)arg1 acceptResponseWithHTTPStatusCode:(NSInteger)arg2;
- (void)_calculateResponses;
- (void)request:(id)arg1 readResponseBody:(id)arg2;

@end
