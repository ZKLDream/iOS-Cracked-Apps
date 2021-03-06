//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FALCLiveEndView, NSString;

@interface FALiveEndViewShowController : NSObject
{
    id <FALiveEndViewShowControllerDataSource> _dataSource;
    id <FALiveEndViewShowControllerDelegate> _delegate;
    FALCLiveEndView *_liveEndView;
    NSString *_starName;
    NSString *_avatarImagePath;
    long long _roomId;
    struct CGRect _frame;
}

@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(nonatomic) long long roomId; // @synthesize roomId=_roomId;
@property(retain, nonatomic) NSString *avatarImagePath; // @synthesize avatarImagePath=_avatarImagePath;
@property(retain, nonatomic) NSString *starName; // @synthesize starName=_starName;
@property(retain, nonatomic) FALCLiveEndView *liveEndView; // @synthesize liveEndView=_liveEndView;
@property(nonatomic) __weak id <FALiveEndViewShowControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <FALiveEndViewShowControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)resetView;
- (_Bool)isNeedRequestFromNet;
- (void)getEndViewInfo:(CDUnknownBlockType)arg1;
- (void)updateLiveEndViewWithStarName:(id)arg1 avatarImagePath:(id)arg2;
- (void)hideLiveEndView;
- (void)showLiveEndView;
- (void)showInView:(id)arg1 withFrame:(struct CGRect)arg2;

@end

