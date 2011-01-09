/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSURL, NSString;



@interface SSItemOfferDeviceError : NSObject 
{
    NSString *_localizedMessage;
    NSString *_localizedTitle;
    NSString *_localizedURLTitle;
    NSURL *_url;
}

@property(readonly) NSURL *URL;
@property(readonly) NSString *localizedURLTitle;
@property(readonly) NSString *localizedTitle;
@property(readonly) NSString *localizedMessage;


- (id)_initWithMessage:(id)arg1 title:(id)arg2 URLTitle:(id)arg3 URL:(id)arg4;
- (id)localizedURLTitle;
- (id)localizedMessage;
- (id)URL;
- (void)dealloc;
- (id)localizedTitle;

@end
