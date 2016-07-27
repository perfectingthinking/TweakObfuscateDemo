//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableView.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class GKScore, NSMutableArray, NSString, UIButton, UIColor, UILabel, UIView;

@interface RBRankingTableView : UITableView <UITableViewDelegate, UITableViewDataSource>
{
    _Bool m_IsPad;
    int _thema;
    long long _playerScope;
    UIView *_footer;
    UIButton *_buttonLoadNext;
    NSMutableArray *_arrayScore;
    NSMutableArray *_arrayName;
    UILabel *_msgLabel;
    GKScore *_localPlayerScore;
    UIColor *_strokeColor;
}

@property(retain, nonatomic) UIColor *strokeColor; // @synthesize strokeColor=_strokeColor;
@property(retain, nonatomic) GKScore *localPlayerScore; // @synthesize localPlayerScore=_localPlayerScore;
@property(retain, nonatomic) UILabel *msgLabel; // @synthesize msgLabel=_msgLabel;
@property(retain, nonatomic) NSMutableArray *arrayName; // @synthesize arrayName=_arrayName;
@property(retain, nonatomic) NSMutableArray *arrayScore; // @synthesize arrayScore=_arrayScore;
@property(retain, nonatomic) UIButton *buttonLoadNext; // @synthesize buttonLoadNext=_buttonLoadNext;
@property(retain, nonatomic) UIView *footer; // @synthesize footer=_footer;
@property(nonatomic) long long playerScope; // @synthesize playerScope=_playerScope;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)pushLoadNext:(id)arg1;
- (void)clear;
- (void)loadRanking;
- (void)load:(unsigned long long)arg1;
- (void)errorMsg;
- (unsigned long long)numEntries;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
