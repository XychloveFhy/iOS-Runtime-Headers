/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */



@interface WebDefaultEditingDelegate : NSObject 
{
}

+ (id)sharedEditingDelegate;

- (void)webViewDidEndEditing:(id)arg1;
- (void)webViewDidChangeSelection:(id)arg1;
- (BOOL)webView:(id)arg1 doCommandBySelector:(SEL)arg2;
- (BOOL)webView:(id)arg1 shouldMoveRangeAfterDelete:(id)arg2 replacingRange:(id)arg3;
- (BOOL)webView:(id)arg1 shouldBeginEditingInDOMRange:(id)arg2;
- (BOOL)webView:(id)arg1 shouldEndEditingInDOMRange:(id)arg2;
- (BOOL)webView:(id)arg1 shouldInsertNode:(id)arg2 replacingDOMRange:(id)arg3 givenAction:(NSInteger)arg4;
- (BOOL)webView:(id)arg1 shouldShowDeleteInterfaceForElement:(id)arg2;
- (BOOL)webView:(id)arg1 shouldApplyStyle:(id)arg2 toElementsInDOMRange:(id)arg3;
- (BOOL)webView:(id)arg1 shouldChangeTypingStyle:(id)arg2 toStyle:(id)arg3;
- (void)webViewDidBeginEditing:(id)arg1;
- (void)webViewDidChangeTypingStyle:(id)arg1;
- (id)undoManagerForWebView:(id)arg1;
- (void)webViewDidChange:(id)arg1;
- (BOOL)webView:(id)arg1 shouldChangeSelectedDOMRange:(id)arg2 toDOMRange:(id)arg3 affinity:(NSInteger)arg4 stillSelecting:(BOOL)arg5;
- (BOOL)webView:(id)arg1 shouldInsertText:(id)arg2 replacingDOMRange:(id)arg3 givenAction:(NSInteger)arg4;
- (BOOL)webView:(id)arg1 shouldDeleteDOMRange:(id)arg2;
- (id)supportedPasteboardTypesForCurrentSelection;
- (id)documentFragmentForPasteboardItemAtIndex:(NSInteger)arg1;

@end
