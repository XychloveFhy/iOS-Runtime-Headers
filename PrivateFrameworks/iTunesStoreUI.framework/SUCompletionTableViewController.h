/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSString, SUSearchFieldConfiguration, <SUCompletionTableDelegate>;



@interface SUCompletionTableViewController : SUTableViewController 
{
    <SUCompletionTableDelegate> *_delegate;
    SUSearchFieldConfiguration *_searchFieldConfiguration;
    NSString *_stringToComplete;
}

@property(readonly) NSInteger numberOfCompletions;
@property(retain) NSString *stringToComplete;
@property(retain) SUSearchFieldConfiguration *searchFieldConfiguration;
@property <SUCompletionTableDelegate> *delegate;


- (void)loadView;
- (void)viewWillAppear:(BOOL)arg1;
- (id)init;
- (void)dealloc;
- (void)reloadData;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (NSInteger)numberOfCompletions;
- (void)setStringToComplete:(id)arg1;
- (struct CGSize { float x1; float x2; })minimumViewSize;
- (void)_dismissWithPickedItem:(id)arg1;
- (void)_fetchCompletions;
- (void)_setCompletions:(id)arg1;
- (id)stringToComplete;
- (BOOL)handleSelectionForIndexPath:(id)arg1 tapCount:(NSInteger)arg2;
- (void)operation:(id)arg1 finishedWithOutput:(id)arg2;
- (struct CGSize { float x1; float x2; })maximumViewSize;
- (void)cancelOperations;
- (id)searchFieldConfiguration;
- (void)setSearchFieldConfiguration:(id)arg1;

@end
