//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UILabel.h"

@interface KGThemeLineAlpha : UILabel
{
    _Bool isRegNotification;
    struct KGColorKeyAlpha _colorkeyAlpha;
}

@property(nonatomic) struct KGColorKeyAlpha colorkeyAlpha; // @synthesize colorkeyAlpha=_colorkeyAlpha;
- (void)dealloc;
- (void)registNotification;
- (void)onChangeTheme:(id)arg1;

@end
