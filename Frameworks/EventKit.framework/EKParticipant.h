/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@class NSURL, NSString;



@interface EKParticipant : NSObject <NSCopying>
{
    NSURL *_address;
    NSString *_commonName;
    NSString *_emailAddress;
    NSInteger _status;
    NSInteger _role;
    NSInteger _type;
    BOOL _isSelf;
    NSUInteger _dirtyFlags;
}

@property(readonly) NSURL *URL;
@property(readonly) NSString *name;
@property(readonly) NSInteger participantStatus;
@property(readonly) NSInteger participantRole;
@property(readonly) NSInteger participantType;

+ (id)participantWithEmailAddress:(id)arg1 commonName:(id)arg2;

- (id)emailAddress;
- (id)initWithEmailAddress:(id)arg1 name:(id)arg2;
- (id)initWithEmailAddress:(id)arg1 name:(id)arg2 role:(NSInteger)arg3 status:(NSInteger)arg4 type:(NSInteger)arg5;
- (id)initWithEmailAddress:(id)arg1 name:(id)arg2 role:(NSInteger)arg3 status:(NSInteger)arg4 type:(NSInteger)arg5 isSelf:(BOOL)arg6;
- (id)initWithURL:(id)arg1 name:(id)arg2 isSelf:(BOOL)arg3;
- (id)initWithURL:(id)arg1 name:(id)arg2 role:(NSInteger)arg3 status:(NSInteger)arg4 type:(NSInteger)arg5 isSelf:(BOOL)arg6;
- (id)initWithURL:(id)arg1 name:(id)arg2 emailAddress:(id)arg3 role:(NSInteger)arg4 status:(NSInteger)arg5 type:(NSInteger)arg6 isSelf:(BOOL)arg7;
- (NSInteger)participantStatus;
- (NSInteger)participantRole;
- (NSInteger)participantType;
- (void*)ABRecordWithAddressBook:(void*)arg1;
- (BOOL)isCurrentUser;
- (id)initWithEmailAddress:(id)arg1 name:(id)arg2 isSelf:(BOOL)arg3;
- (BOOL)isDirty;
- (id)URL;
- (id)name;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)displayName;

@end
