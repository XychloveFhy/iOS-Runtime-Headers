/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSURL, NSString;



@interface ISOpenURLRequest : NSObject <NSCopying>
{
    BOOL _isITunesStoreURL;
    NSString *_targetIdentifier;
    NSURL *_url;
}

@property(retain) NSURL *URL;
@property(copy) NSString *targetIdentifier;
@property(getter=isITunesStoreURL) BOOL ITunesStoreURL;

+ (id)openURLRequestWithURL:(id)arg1;

- (id)targetIdentifier;
- (BOOL)isITunesStoreURL;
- (void)setTargetIdentifier:(id)arg1;
- (void)setITunesStoreURL:(BOOL)arg1;
- (id)initWithURL:(id)arg1;
- (void)setURL:(id)arg1;
- (id)URL;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)dealloc;

@end
