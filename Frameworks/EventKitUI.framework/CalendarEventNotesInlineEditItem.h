/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class CalendarNotesCell;



@interface CalendarEventNotesInlineEditItem : CalendarEventEditItem <UITextViewDelegate>
{
    CalendarNotesCell *_cell;
}


- (id)detailViewWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forSubitefgdfgdmAtIndex:(NSInteger)arg2;
- (BOOL)editItemViewDirty:(id)arg1;
- (id)cellForSubitemAtIndex:(NSInteger)arg1 givenEditModel:(id)arg2;
- (void)saveIntoEvent:(void*)arg1;
- (void)completeCancelled;
- (id)serializedValue;
- (BOOL)shouldCancelEditingForModel:(id)arg1;
- (float)defaultCellHeightForSubitemAtIndex:(NSInteger)arg1 forWidth:(float)arg2;
- (void)textViewDidEndEditing:(id)arg1;
- (id)identifier;
- (void)dealloc;

@end
