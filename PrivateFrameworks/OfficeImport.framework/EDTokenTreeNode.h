/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class EDTokenTreeNode;



@interface EDTokenTreeNode : NSObject 
{
    NSUInteger mTokenIndex;
    NSInteger mTokenType;
    EDTokenTreeNode *mFirstChild;
    EDTokenTreeNode *mSibling;
}

+ (id)tokenTreeNodeWithIndexAndType:(NSUInteger)arg1 type:(NSInteger)arg2;

- (id)initWithIndexAndType:(NSUInteger)arg1 type:(NSInteger)arg2;
- (NSUInteger)tokenIndex;
- (void)setFirstChild:(id)arg1;
- (id)sibling;
- (void)setSibling:(id)arg1;
- (id)firstChild;
- (id)init;
- (void)dealloc;

@end
