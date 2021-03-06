//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "AboutViewDelegate-Protocol.h"
#import "PartViewDelegate-Protocol.h"

@class AboutView, CenterLineView, NSMutableArray, NSString, PartView, UIImage;
@protocol GlobalViewDelegate;

@interface GlobalView : UIView <PartViewDelegate, AboutViewDelegate>
{
    _Bool _isIPhone;
    _Bool _noDrawPaintFlg;
    int _nowAngle;
    float _mainScreenScale;
    id <GlobalViewDelegate> _delegate;
    PartView *_partView;
    AboutView *_aboutView;
    UIImage *_partBackgroundImage;
    NSMutableArray *_partsArray;
    NSMutableArray *_partsStaticDataArray;
    NSMutableArray *_partsDataArray;
    NSMutableArray *_exIconColor;
    unsigned long long _pageSize;
    unsigned long long _vmPageSize;
    double _physicalMemory;
    NSString *_osVersionBundle;
    NSMutableArray *_paintColorArray;
    NSMutableArray *_endAngleArray;
    CenterLineView *_centerLineView;
    struct CGSize _partSize;
    struct CGRect _halfCircleFrame;
}

@property(retain, nonatomic) CenterLineView *centerLineView; // @synthesize centerLineView=_centerLineView;
@property(nonatomic) _Bool noDrawPaintFlg; // @synthesize noDrawPaintFlg=_noDrawPaintFlg;
@property(retain, nonatomic) NSMutableArray *endAngleArray; // @synthesize endAngleArray=_endAngleArray;
@property(retain, nonatomic) NSMutableArray *paintColorArray; // @synthesize paintColorArray=_paintColorArray;
@property(retain, nonatomic) NSString *osVersionBundle; // @synthesize osVersionBundle=_osVersionBundle;
@property(nonatomic) double physicalMemory; // @synthesize physicalMemory=_physicalMemory;
@property(nonatomic) unsigned long long vmPageSize; // @synthesize vmPageSize=_vmPageSize;
@property(nonatomic) unsigned long long pageSize; // @synthesize pageSize=_pageSize;
@property(retain, nonatomic) NSMutableArray *exIconColor; // @synthesize exIconColor=_exIconColor;
@property(nonatomic) struct CGRect halfCircleFrame; // @synthesize halfCircleFrame=_halfCircleFrame;
@property(retain, nonatomic) NSMutableArray *partsDataArray; // @synthesize partsDataArray=_partsDataArray;
@property(retain, nonatomic) NSMutableArray *partsStaticDataArray; // @synthesize partsStaticDataArray=_partsStaticDataArray;
@property(retain, nonatomic) NSMutableArray *partsArray; // @synthesize partsArray=_partsArray;
@property(retain, nonatomic) UIImage *partBackgroundImage; // @synthesize partBackgroundImage=_partBackgroundImage;
@property(nonatomic) struct CGSize partSize; // @synthesize partSize=_partSize;
@property(retain, nonatomic) AboutView *aboutView; // @synthesize aboutView=_aboutView;
@property(retain, nonatomic) PartView *partView; // @synthesize partView=_partView;
@property(nonatomic) float mainScreenScale; // @synthesize mainScreenScale=_mainScreenScale;
@property(nonatomic) _Bool isIPhone; // @synthesize isIPhone=_isIPhone;
@property(nonatomic) int nowAngle; // @synthesize nowAngle=_nowAngle;
@property(nonatomic) id <GlobalViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)TouchAboutView:(id)arg1;
- (void)TouchPartView:(id)arg1 partNumber:(int)arg2;
- (void)memoryDataInsert:(id)arg1;
- (void)cpuDataInsert:(id)arg1;
- (void)networkDataInsert:(id)arg1;
- (void)batteryDataInsert:(id)arg1;
- (void)diskDataInsert:(id)arg1;
- (void)detaileDataInsert:(id)arg1;
- (void)createFrame:(struct CGRect)arg1 nowAngle:(int)arg2;
- (void)initializePartsData:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 isIPhone:(_Bool)arg2 mainScreenScale:(float)arg3 physicalMemory:(double)arg4 pageSize:(unsigned long long)arg5 vmPageSize:(unsigned long long)arg6 deviceInformation:(id)arg7 backgroundCoor:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

