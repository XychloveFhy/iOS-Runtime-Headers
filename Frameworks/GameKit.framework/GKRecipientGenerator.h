/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSArray;



@interface GKRecipientGenerator : NSObject 
{
    void *_addressBook;
    NSArray *_searchABPropertyTypes;
    NSArray *_generateABPropertyTypes;
}

@property(retain) NSArray *generateABPropertyTypes;
@property(retain) NSArray *searchABPropertyTypes;


- (id)generateABPropertyTypes;
- (void)_appendSearchResults:(id)arg1 identifiers:(id)arg2 abPropertyType:(NSInteger)arg3 toArray:(id)arg4;
- (id)searchABPropertyTypes;
- (id)recipientWithAddress:(id)arg1;
- (id)recipientWithRecord:(void*)arg1 property:(NSInteger)arg2 identifier:(NSInteger)arg3;
- (id)resultsForText:(id)arg1;
- (void)setSearchABPropertyTypes:(id)arg1;
- (void)setGenerateABPropertyTypes:(id)arg1;
- (void)dealloc;

@end
