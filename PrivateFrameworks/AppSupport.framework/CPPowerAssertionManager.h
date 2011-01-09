/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

@class NSCountedSet, NSMutableSet, NSString, <CPPowerAssertionManagerDelegate>, NSMutableDictionary;



@interface CPPowerAssertionManager : NSObject 
{
    NSString *_uuid;
    NSCountedSet *_contexts;
    NSMutableDictionary *_groupIdentifierToContexts;
    struct __CFDictionary { } *_contextToGroupIdentifier;
    NSMutableSet *_heldAsideGroupIdentifiers;
    NSCountedSet *_heldAsideContexts;
    <CPPowerAssertionManagerDelegate> *_delegate;
}

@property(readonly) NSString *uuid;
@property <CPPowerAssertionManagerDelegate> *delegate;

+ (id)sharedInstance;

- (id)description;
- (id)init;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)_retainAssertions;
- (void)_releaseAssertions;
- (id)uuid;
- (NSUInteger)retainCountForContext:(id)arg1;
- (void)setUUIDPrefix:(id)arg1;
- (void)retainPowerAssertionWithContext:(id)arg1;
- (void)retainPowerAssertionWithContext:(id)arg1 withGroupIdentifier:(id)arg2;
- (void)releasePowerAssertionWithContext:(id)arg1;
- (void)temporarilyReleasePowerAssertionsForGroupIdentifier:(id)arg1;
- (void)reretainPowerAssertionsForGroupIdentifier:(id)arg1;

@end
