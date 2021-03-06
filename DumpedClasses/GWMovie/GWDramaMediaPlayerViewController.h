//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GWBaseViewController.h"

@class AVPlayer, AVPlayerItem, AVPlayerViewController, MPMoviePlayerViewController, NSString;

@interface GWDramaMediaPlayerViewController : GWBaseViewController
{
    NSString *_urlString;
    AVPlayer *_player9;
    AVPlayerItem *_item;
    AVPlayerViewController *_playerVC9;
    MPMoviePlayerViewController *_playerVC8;
}

@property(retain, nonatomic) MPMoviePlayerViewController *playerVC8; // @synthesize playerVC8=_playerVC8;
@property(retain, nonatomic) AVPlayerViewController *playerVC9; // @synthesize playerVC9=_playerVC9;
@property(retain, nonatomic) AVPlayerItem *item; // @synthesize item=_item;
@property(retain, nonatomic) AVPlayer *player9; // @synthesize player9=_player9;
@property(copy, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
- (void).cxx_destruct;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)pause;
- (double)availableDurationWithplayerItem:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)loadPlayer;
- (void)viewDidLoad;

@end

