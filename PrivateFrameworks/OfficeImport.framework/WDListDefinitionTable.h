/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class WDListDefinition, NSMutableArray, WDDocument;



@interface WDListDefinitionTable : NSObject 
{
    NSMutableArray *mListDefinitions;
    struct __CFDictionary { } *mListDefinitionMap;
    NSUInteger mNextIdIndex;
    WDDocument *mDocument;
    WDListDefinition *mLastKnownGoodListDefinition;
}


- (id)document;
- (NSInteger)nextId;
- (void)setLastKnowGoodListDefinition:(id)arg1;
- (NSInteger)definitionCount;
- (id)definitionAt:(NSInteger)arg1;
- (id)definitionWithId:(NSInteger)arg1;
- (id)addDefinition;
- (id)initWithDocument:(id)arg1;
- (id)addDefinition:(NSInteger)arg1;
- (void)dealloc;

@end
