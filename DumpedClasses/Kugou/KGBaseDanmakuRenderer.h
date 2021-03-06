//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "KGBaseDanmakuRetainerProtocol.h"

@class LazyAllocSet, NSMutableArray, NSString, UIView;

@interface KGBaseDanmakuRenderer : NSObject <KGBaseDanmakuRetainerProtocol>
{
    UIView *_canvas;
    id <KGBaseDanmakuRendererProtocol> _delegate;
    LazyAllocSet *_lazyRetainerSet;
    NSMutableArray *_danmakuRetainerArray;
}

@property(retain, nonatomic) NSMutableArray *danmakuRetainerArray; // @synthesize danmakuRetainerArray=_danmakuRetainerArray;
@property(readonly, nonatomic) LazyAllocSet *lazyRetainerSet; // @synthesize lazyRetainerSet=_lazyRetainerSet;
@property(nonatomic) __weak id <KGBaseDanmakuRendererProtocol> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UIView *canvas; // @synthesize canvas=_canvas;
- (void).cxx_destruct;
- (id)createDanmakuView:(id)arg1;
- (void)recycleCell:(id)arg1;
- (void)p_initialRetainerWithRenderType:(id)arg1 retainer:(id)arg2;
- (void)p_initProperty;
- (void)enumerateCellsUsingBlock:(CDUnknownBlockType)arg1;
- (id)retainerViews;
- (id)rendererTypes;
- (void)updateCanvasFrame;
- (void)reloadView;
- (void)render;
- (void)clear;
- (void)pause;
- (void)play;
- (void)removeAllRetainer;
- (id)initWithCanvas:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

