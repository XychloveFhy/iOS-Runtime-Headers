/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */



@interface CMTimeAsValue : NSValue 
{
    struct { 
        long long value; 
        NSInteger timescale; 
        NSUInteger flags; 
        long long epoch; 
    } _time;
}

+ (id)valueWithCMTime:(struct { long long x1; NSInteger x2; NSUInteger x3; long long x4; })arg1;

- (unsigned long)unsignedLongValue;
- (unsigned char)unsignedCharValue;
- (unsigned long long)unsignedLongLongValue;
- (unsigned short)unsignedShortValue;
- (NSUInteger)unsignedIntegerValue;
- (NSInteger)integerValue;
- (long long)longLongValue;
- (double)doubleValue;
- (float)floatValue;
- (void)getValue:(void*)arg1;
- (NSInteger)intValue;
- (BOOL)boolValue;
- (NSUInteger)unsignedIntValue;
- (struct { long long x1; NSInteger x2; NSUInteger x3; long long x4; })CMTimeValue;
- (short)shortValue;
- (BOOL)charValue;
- (const char *)objCType;
- (long)longValue;

@end
