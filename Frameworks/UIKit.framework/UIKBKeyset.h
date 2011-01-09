/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, NSMutableArray;



@interface UIKBKeyset : NSObject <NSCoding>
{
    NSString *m_name;
    NSMutableArray *m_keylists;
}

@property(retain) NSMutableArray *keylists;
@property(retain) NSString *name;

+ (id)keyset;

- (id)keylistWithName:(id)arg1;
- (BOOL)addKeylist:(id)arg1;
- (void)setKeylists:(id)arg1;
- (id)keylists;
- (void)setName:(id)arg1;
- (id)name;
- (id)description;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;

@end
