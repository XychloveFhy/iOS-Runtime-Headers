/* Generated by RuntimeBrowser.
 */

@protocol NCWidgetProviding <NSObject>

@optional

- (void)widgetActiveDisplayModeDidChange:(int)arg1 withMaximumSize:(struct CGSize { float x1; float x2; })arg2;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })widgetMarginInsetsForProposedMarginInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)widgetPerformUpdateWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned int, void*

@end
