//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSString, UISwitch;

@interface SettingsViewController : UITableViewController <UITableViewDelegate, UITableViewDataSource>
{
    _Bool bEnableMyPage;
    NSArray *menuTable;
    NSArray *menuTypeTable;
    id _settingsDelegate;
    UISwitch *_switchCombo;
}

@property(retain, nonatomic) UISwitch *switchCombo; // @synthesize switchCombo=_switchCombo;
@property(nonatomic) __weak id settingsDelegate; // @synthesize settingsDelegate=_settingsDelegate;
- (void).cxx_destruct;
- (void)deleteCustomSequence;
- (void)alertSelect:(id)arg1;
- (void)dealloc;
- (_Bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (id)getTargetPath:(int)arg1;
- (id)getTargetPath:(int)arg1 inSection:(int)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)settingClose;
- (void)comboChanged:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)loadView;
- (id)initWithStyle:(long long)arg1;
- (void)createMenuTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
