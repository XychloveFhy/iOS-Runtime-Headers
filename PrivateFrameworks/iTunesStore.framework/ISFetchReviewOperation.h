/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSURL, ISReview;



@interface ISFetchReviewOperation : ISOperation 
{
    NSInteger _assetType;
    BOOL _backgroundReview;
    unsigned long long _itemIdentifier;
    NSUInteger _softwareVersionIdentifier;
    ISReview *_review;
    NSURL *_url;
}

@property(retain) NSURL *url;
@property NSUInteger softwareVersionIdentifier;
@property(retain) ISReview *review;
@property unsigned long long itemIdentifier;
@property(getter=isBackgroundReview) BOOL backgroundReview;
@property NSInteger assetType;


- (id)url;
- (void)setUrl:(id)arg1;
- (void)_fetchReviewInformation;
- (NSUInteger)softwareVersionIdentifier;
- (void)setSoftwareVersionIdentifier:(NSUInteger)arg1;
- (BOOL)isBackgroundReview;
- (void)setBackgroundReview:(BOOL)arg1;
- (void)run;
- (void)dealloc;
- (id)review;
- (NSInteger)assetType;
- (void)setAssetType:(NSInteger)arg1;
- (void)setItemIdentifier:(unsigned long long)arg1;
- (void)setReview:(id)arg1;
- (unsigned long long)itemIdentifier;

@end
