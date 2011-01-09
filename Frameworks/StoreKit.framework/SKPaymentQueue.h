/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */



@interface SKPaymentQueue : NSObject 
{
    id _internal;
}

@property(readonly) NSArray *transactions;

+ (BOOL)canMakePayments;
+ (id)defaultQueue;

- (void)_mainThreadDaemonExited:(id)arg1;
- (void)_daemonExited:(id)arg1;
- (void)addPayment:(id)arg1;
- (void)addTransactionObserver:(id)arg1;
- (void)finishTransaction:(id)arg1;
- (void)removeTransactionObserver:(id)arg1;
- (void)restoreCompletedTransactions;
- (id)transactions;
- (void)_applicationBecameActiveNotification:(id)arg1;
- (void)_daemonLaunchedNotification;
- (void)_restoreTransactionsFailedNotification:(id)arg1;
- (void)_restoreTransactionsFinishedNotification:(id)arg1;
- (void)_transactionsAddedNotification:(id)arg1;
- (void)_transactionsRefreshedNotification:(id)arg1;
- (void)_transactionsRemovedNotification:(id)arg1;
- (void)_transactionUpdatedNotification:(id)arg1;
- (void)_addLocalTransactionForPayment:(id)arg1;
- (id)_copyRemovalsFromUnmergedIndexSet:(id)arg1;
- (id)_copyTransactionsFromNotification:(id)arg1;
- (void)_notifyObserversAboutChanges:(id)arg1;
- (void)_notifyObserversAboutRemovals:(id)arg1;
- (void)_notifyObserversRestoreTransactionsFailedWithError:(id)arg1;
- (void)_notifyObserversRestoreTransactionsFinished;
- (void)_processUpdates:(id)arg1 trimUnmatched:(BOOL)arg2;
- (void)_registerForNotificationsIfNeeded;
- (void)_removeLocalTransaction:(id)arg1;
- (void)_unregisterForNotifications;
- (void)_registerForNotifications;
- (id)init;
- (void)dealloc;

@end
