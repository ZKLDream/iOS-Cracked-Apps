//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class AVFunExpressionRender;

@interface AVFunExpressionView : UIView
{
    AVFunExpressionRender *_render;
}

+ (Class)layerClass;
- (void)clear;
- (void)render:(char *)arg1 width:(unsigned int)arg2 height:(unsigned int)arg3 disWidth:(unsigned int)arg4 disHeight:(unsigned int)arg5;
- (void)layoutSubviews;
- (void)setupLayer;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

