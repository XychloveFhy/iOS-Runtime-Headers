/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class NSMutableArray;



@interface ABPersonTableActionDataSource : NSObject 
{
    NSMutableArray *_topActions;
    NSMutableArray *_bottomActions;
    struct __CFDictionary { } *_actionsByProperty;
    struct __CFDictionary { } *_actionGroupingsByProperty;
    struct __CFSet { } *_hiddenActions;
}


- (void)dealloc;
- (struct __CFDictionary { }*)actionsByProperty;
- (struct __CFDictionary { }*)actionGroupingsByProperty;
- (id)topActions;
- (id)bottomActions;
- (BOOL)hasActionWithTarget:(id)arg1 selector:(SEL)arg2 matchProperty:(BOOL)arg3 property:(NSInteger)arg4 inArray:(id)arg5 outActions:(id*)arg6 outIndex:(NSInteger*)arg7;
- (void)removeActionWithTarget:(id)arg1 selector:(SEL)arg2 forProperty:(NSInteger)arg3 withActionGrouping:(NSInteger)arg4 ordering:(NSInteger)arg5;
- (struct __CFArray { }*)groupingsForProperty:(NSInteger)arg1;
- (NSInteger)actionCountForProperty:(NSInteger)arg1 withActionGrouping:(NSInteger)arg2;
- (id)actionForProperty:(NSInteger)arg1 withActionGrouping:(NSInteger)arg2 atIndex:(NSInteger)arg3;
- (struct __CFArray { }*)indexesOfActionsForProperty:(NSInteger)arg1 withActionGrouping:(NSInteger)arg2;
- (id)actionWithActionGrouping:(NSInteger)arg1 atIndex:(NSInteger)arg2;
- (NSInteger)groupingCountForProperty:(NSInteger)arg1;
- (BOOL)hasActionWithTarget:(id)arg1 selector:(SEL)arg2 property:(NSInteger)arg3 actionGrouping:(NSInteger)arg4 ordering:(NSInteger)arg5 outActions:(id*)arg6 outIndex:(NSInteger*)arg7;
- (NSInteger)actionCountForActionGrouping:(NSInteger)arg1;
- (void)removeAction:(id)arg1;
- (id)actionsForProperty:(NSInteger)arg1 withActionGrouping:(NSInteger)arg2;
- (id)actionsForProperty:(NSInteger)arg1 withActionGroupingAtIndex:(NSInteger)arg2;
- (void)setAction:(id)arg1 hidden:(BOOL)arg2;
- (BOOL)isActionHidden:(id)arg1;
- (id)newActionsForProperty:(NSInteger)arg1;
- (id)addActionWithTitle:(id)arg1 shortTitle:(id)arg2 detailText:(id)arg3 style:(NSInteger)arg4 target:(id)arg5 selector:(SEL)arg6 property:(NSInteger)arg7 actionGrouping:(NSInteger)arg8 ordering:(NSInteger)arg9;

@end
