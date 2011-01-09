/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSArray;



@interface SSRentalCheckoutRequest : SSRequest 
{
    NSArray *_sinfs;
}

@property(readonly) NSArray *sinfs;


- (id)initWithSinfs:(id)arg1;
- (BOOL)handleFinishResponse:(id)arg1 error:(id*)arg2;
- (BOOL)issueRequestForIdentifier:(id)arg1 error:(id*)arg2;
- (id)sinfs;
- (id)copyPropertyListEncoding;
- (id)initWithPropertyListEncoding:(id)arg1;
- (id)init;
- (void)dealloc;

@end
