/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@class NSString;



@interface VMUSection : NSObject 
{
    NSString *_sectionName;
    NSString *_segmentName;
    unsigned long long _addr;
    unsigned long long _size;
    NSUInteger _offset;
    NSUInteger _align;
    NSUInteger _reloff;
    NSUInteger _nreloc;
    NSUInteger _flags;
    NSUInteger _reserved1;
    NSUInteger _reserved2;
}


- (NSUInteger)align;
- (NSUInteger)flags;
- (id)description;
- (unsigned long long)size;
- (NSUInteger)offset;
- (void)dealloc;
- (BOOL)isSection32;
- (BOOL)isSection64;
- (NSUInteger)reloff;
- (NSUInteger)nreloc;
- (NSUInteger)reserved1;
- (NSUInteger)reserved2;
- (id)segmentName;
- (id)sectionName;
- (unsigned long long)addr;

@end
