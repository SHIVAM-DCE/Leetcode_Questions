-- ✅ Correct
SELECT user_id,
       ROUND(AVG(IF(activity_type = 'free_trial',
                    activity_duration, NULL)), 2) AS trial_avg_duration,
       ROUND(AVG(IF(activity_type = 'paid',
                    activity_duration, NULL)), 2) AS paid_avg_duration
FROM UserActivity
GROUP BY user_id
HAVING trial_avg_duration IS NOT NULL
AND paid_avg_duration IS NOT NULL
-- order by user_id;