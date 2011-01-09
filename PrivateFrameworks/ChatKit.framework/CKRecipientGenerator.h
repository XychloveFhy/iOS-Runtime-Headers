/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class NSArray;



@interface CKRecipientGenerator : NSObject 
{
    void *_addressBook;
    NSArray *_searchABPropertyTypes;
}

@property(retain) NSArray *searchABPropertyTypes;


- (void)_appendSearchResults:(id)arg1 identifiers:(id)arg2 abPropertyType:(NSInteger)arg3 toArray:(id)arg4;
- (id)searchABPropertyTypes;
- (id)recipientWithAddress:(id)arg1;
- (id)recipientWithRecord:(void*)arg1 property:(NSInteger)arg2 identifier:(NSInteger)arg3;
- (id)resultsForText:(id)arg1;
- (void)setSearchABPropertyTypes:(id)arg1;
- (void)dealloc;

@end
