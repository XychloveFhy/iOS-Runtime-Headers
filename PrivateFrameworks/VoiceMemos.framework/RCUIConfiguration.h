/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@class NSString, UIColor;

@interface RCUIConfiguration : NSObject <NSCopying> {
    double _acousticAnnotationVerticalMargin;
    UIColor *_acousticGradientMaskEndColor;
    UIColor *_acousticValueColor;
    UIColor *_backgroundColor;
    NSString *_debugIdentifier;
    float _maximumDecibelDisplayRange;
    float _minimumDecibelDisplayRange;
    UIColor *_playbackPositionBarColor;
    UIColor *_playbackPositionTimeColor;
    UIColor *_selectionOverlayColor;
    UIColor *_selectionOverlayEndpointBarColor;
    UIColor *_selectionOverlayEndpointTimeColor;
    UIColor *_timeLineMarkerColor;
    UIColor *_timeLineTimeColor;
    UIColor *_waveformBoundaryLineColor;
    UIColor *_waveformColor;
    UIColor *_waveformHighlightColor;
    bool_showsWaveformCenterline;
    bool_waveformBoundaryLineDimInSelectionMode;
}

@property double acousticAnnotationVerticalMargin;
@property(retain) UIColor * acousticGradientMaskEndColor;
@property(retain) UIColor * acousticValueColor;
@property(retain) UIColor * backgroundColor;
@property(retain) NSString * debugIdentifier;
@property float maximumDecibelDisplayRange;
@property float minimumDecibelDisplayRange;
@property(retain) UIColor * playbackPositionBarColor;
@property(retain) UIColor * playbackPositionTimeColor;
@property(retain) UIColor * selectionOverlayColor;
@property(retain) UIColor * selectionOverlayEndpointBarColor;
@property(retain) UIColor * selectionOverlayEndpointTimeColor;
@property bool showsWaveformCenterline;
@property(retain) UIColor * timeLineMarkerColor;
@property(retain) UIColor * timeLineTimeColor;
@property(retain) UIColor * waveformBoundaryLineColor;
@property bool waveformBoundaryLineDimInSelectionMode;
@property(retain) UIColor * waveformColor;
@property(retain) UIColor * waveformHighlightColor;

+ (id)defaultConfiguration;

- (void).cxx_destruct;
- (double)acousticAnnotationVerticalMargin;
- (id)acousticGradientMaskEndColor;
- (id)acousticValueColor;
- (id)backgroundColor;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugIdentifier;
- (id)description;
- (float)maximumDecibelDisplayRange;
- (float)minimumDecibelDisplayRange;
- (id)playbackPositionBarColor;
- (id)playbackPositionTimeColor;
- (id)selectionOverlayColor;
- (id)selectionOverlayEndpointBarColor;
- (id)selectionOverlayEndpointTimeColor;
- (void)setAcousticAnnotationVerticalMargin:(double)arg1;
- (void)setAcousticGradientMaskEndColor:(id)arg1;
- (void)setAcousticValueColor:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setDebugIdentifier:(id)arg1;
- (void)setMaximumDecibelDisplayRange:(float)arg1;
- (void)setMinimumDecibelDisplayRange:(float)arg1;
- (void)setPlaybackPositionBarColor:(id)arg1;
- (void)setPlaybackPositionTimeColor:(id)arg1;
- (void)setSelectionOverlayColor:(id)arg1;
- (void)setSelectionOverlayEndpointBarColor:(id)arg1;
- (void)setSelectionOverlayEndpointTimeColor:(id)arg1;
- (void)setShowsWaveformCenterline:(bool)arg1;
- (void)setTimeLineMarkerColor:(id)arg1;
- (void)setTimeLineTimeColor:(id)arg1;
- (void)setWaveformBoundaryLineColor:(id)arg1;
- (void)setWaveformBoundaryLineDimInSelectionMode:(bool)arg1;
- (void)setWaveformColor:(id)arg1;
- (void)setWaveformHighlightColor:(id)arg1;
- (bool)showsWaveformCenterline;
- (id)timeLineMarkerColor;
- (id)timeLineTimeColor;
- (id)waveformBoundaryLineColor;
- (bool)waveformBoundaryLineDimInSelectionMode;
- (id)waveformColor;
- (id)waveformHighlightColor;

@end