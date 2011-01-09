/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@class NSOperationQueue, NSMutableArray;



@interface TIWordSearch : NSObject 
{
    NSMutableArray *_candidates;
    NSOperationQueue *_operationQueue;
}


- (void)_getCandidatesOnThread:(id)arg1;
- (void)completeOperationsInQueue;
- (void)performOperationAsync:(id)arg1;
- (id)initTIWordSearch;
- (void)clearLearningDictionary;
- (void)performAccept:(id)arg1 isPartial:(BOOL)arg2;
- (void)acceptCandidate:(id)arg1 isPartial:(BOOL)arg2;
- (void)cancelLastAcceptedCandidate;
- (NSUInteger)getCandidateReadingLength:(id)arg1;
- (void)resetPreviousWord;
- (id)getCandidates:(id)arg1;
- (void)lastAcceptedCandidateCorrected;
- (void)cancel;
- (void)dealloc;
- (BOOL)isCancelled;

@end
