//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSIndexPath, SKSTableView, UITableView, UITableViewCell;

@protocol SKSTableViewDelegate <UITableViewDataSource, UITableViewDelegate>
- (void)tableView:(UITableView *)arg1 didSelectSubRowAtIndexPath:(NSIndexPath *)arg2;
- (double)tableView:(UITableView *)arg1 heightForSubRowAtIndexPath:(NSIndexPath *)arg2;
- (UITableViewCell *)tableView:(SKSTableView *)arg1 cellForSubRowAtIndexPath:(NSIndexPath *)arg2;
- (long long)tableView:(SKSTableView *)arg1 numberOfSubRowsAtIndexPath:(NSIndexPath *)arg2;
@end
