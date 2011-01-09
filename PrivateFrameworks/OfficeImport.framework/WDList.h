/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class WDListDefinition, NSMutableArray, WDDocument;



@interface WDList : NSObject 
{
    NSMutableArray *mLevelOverrides;
    WDDocument *mDocument;
    NSInteger mIndex;
    WDListDefinition *mListDefinition;
}


- (id)document;
- (NSInteger)levelOverrideCount;
- (id)levelOverrideAt:(NSInteger)arg1;
- (id)levelOverrides;
- (id)initWithDocument:(id)arg1 listDefinition:(id)arg2;
- (id)addLevelOverride;
- (void)setIndex:(NSInteger)arg1;
- (NSInteger)listId;
- (id)listDefinition;
- (NSInteger)index;
- (void)dealloc;

@end
