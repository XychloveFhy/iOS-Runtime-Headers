/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSLocale, NSString, NSMutableDictionary;



@interface AVMetadataItemInternal : NSObject 
{
    struct OpaqueFigMetadataReader { } *reader;
    NSInteger itemIndex;
    NSString *keySpace;
    id key;
    NSString *commonKey;
    NSLocale *locale;
    id value;
    struct { 
        long long value; 
        NSInteger timescale; 
        NSUInteger flags; 
        long long epoch; 
    } time;
    NSMutableDictionary *extras;
}



@end
