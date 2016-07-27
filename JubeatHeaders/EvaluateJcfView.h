//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIScrollViewDelegate-Protocol.h"

@class NSString, StoreButton, UIButton, UIImageView, UILabel, UISlider, jubeatLabAccess;

@interface EvaluateJcfView : UIView <UIScrollViewDelegate>
{
    StoreButton *btnCancel;
    UIButton *goodJobBtn;
    UIImageView *goodJobLabel;
    UILabel *levelTitle;
    UISlider *levelSlider;
    UIButton *levelCommitBtn;
    NSString *seqID;
    int sendLevel;
    int musicID;
    UILabel *textLabel;
    id delegate;
    _Bool isPad;
    jubeatLabAccess *goodJobCommit;
    jubeatLabAccess *levelCommit;
}

+ (Class)layerClass;
- (void).cxx_destruct;
- (void)jubeatLabAccessFinished:(id)arg1;
- (void)jubeatLabAccessError:(id)arg1;
- (void)evaluateEnd;
- (void)levelChange:(int)arg1;
- (void)sliderChange:(id)arg1;
- (void)pushLevelCommit:(id)arg1;
- (void)pushGoodJob:(id)arg1;
- (void)pushCancel:(id)arg1;
- (id)initWithID:(id)arg1 defaultLevel:(int)arg2 delegate:(id)arg3 tuneID:(int)arg4;
- (void)createStoreBtn:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
