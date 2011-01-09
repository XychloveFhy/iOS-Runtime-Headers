/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSString;



@interface MCProfileWarning : NSObject <NSCoding>
{
    NSString *_localizedTitle;
    NSString *_localizedBody;
    BOOL _isLongForm;
}

@property BOOL isLongForm;
@property(retain) NSString *localizedBody;
@property(retain) NSString *localizedTitle;

+ (id)warningWithLocalizedTitle:(id)arg1 localizedBody:(id)arg2 isLongForm:(BOOL)arg3;

- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithLocalizedTitle:(id)arg1 localizedBody:(id)arg2 isLongForm:(BOOL)arg3;
- (BOOL)isLongForm;
- (void)setIsLongForm:(BOOL)arg1;
- (id)localizedBody;
- (void)setLocalizedBody:(id)arg1;
- (id)localizedTitle;
- (void)setLocalizedTitle:(id)arg1;

@end
