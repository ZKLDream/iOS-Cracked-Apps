//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class GWCinemaIcon, NSOperation, UIButton, UIImage;

@interface GWCinemaDescInfoView : UIView
{
    _Bool _displayLine;
    NSOperation *_downloadOperation;
    UIImage *_showImage;
    UIButton *_arrowButton;
    double _topEdge;
    GWCinemaIcon *_icon;
    CDUnknownBlockType _arrowButtonClick;
    struct CGSize _showImageSize;
}

@property(copy, nonatomic) CDUnknownBlockType arrowButtonClick; // @synthesize arrowButtonClick=_arrowButtonClick;
@property(nonatomic) _Bool displayLine; // @synthesize displayLine=_displayLine;
@property(retain, nonatomic) GWCinemaIcon *icon; // @synthesize icon=_icon;
@property(nonatomic) double topEdge; // @synthesize topEdge=_topEdge;
@property(nonatomic) struct CGSize showImageSize; // @synthesize showImageSize=_showImageSize;
@property(retain, nonatomic) UIButton *arrowButton; // @synthesize arrowButton=_arrowButton;
@property(retain, nonatomic) UIImage *showImage; // @synthesize showImage=_showImage;
@property(retain, nonatomic) NSOperation *downloadOperation; // @synthesize downloadOperation=_downloadOperation;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)arrowButtonClickOutside:(id)arg1;
- (void)arrowButtonClick:(id)arg1;
- (void)arrowButtonClickHighlight:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end
