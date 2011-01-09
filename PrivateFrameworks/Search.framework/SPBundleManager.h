/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/Search.framework/Search
 */

@class NSDictionary, NSArray;



@interface SPBundleManager : NSObject 
{
    NSArray *_searchBundles;
    NSArray *_datastores;
    struct dispatch_queue_s { } *_queue;
    NSDictionary *_domainMap;
}

@property(readonly) NSArray *searchBundles;
@property(readonly) NSArray *datastores;

+ (id)sharedManager;

- (void)dealloc;
- (void)_loadSearchBundles;
- (id)searchBundles;
- (id)datastores;
- (id)domainMap;
- (struct dispatch_queue_s { }*)dispatchQueue;
- (void)resetDatastores;
- (id)datastoreForDomain:(NSUInteger)arg1;

@end
