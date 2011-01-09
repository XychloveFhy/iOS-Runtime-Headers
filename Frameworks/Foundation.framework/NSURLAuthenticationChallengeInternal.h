/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSURLResponse, NSError, <NSURLAuthenticationChallengeSender>, NSURLProtectionSpace, NSURLCredential;



@interface NSURLAuthenticationChallengeInternal : NSObject 
{
    NSURLProtectionSpace *space;
    NSURLCredential *proposedCredential;
    NSInteger previousFailureCount;
    NSURLResponse *failureResponse;
    NSError *error;
    <NSURLAuthenticationChallengeSender> *sender;
}


- (id)initWithProtectionSpace:(id)arg1 proposedCredential:(id)arg2 previousFailureCount:(NSInteger)arg3 failureResponse:(id)arg4 error:(id)arg5 sender:(id)arg6;
- (void)dealloc;

@end
